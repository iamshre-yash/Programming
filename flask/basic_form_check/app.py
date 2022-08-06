from flask import Flask, redirect, render_template, request
from flask_sqlalchemy import SQLAlchemy
from datetime import datetime

app = Flask(__name__)

app.config['SQLALCHEMY_DATABASE_URI'] = "sqlite:///users.db"
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(app)


class data(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(49), nullable=False)
    sports = db.Column(db.String(200), nullable=False)
    date = db.Column(db.DateTime, default=datetime.utcnow)

    def __repr__(self):
        return f"{self.name} - {self.sports}"


SPORTS = ["Dodgeball",
          "Football",
          "basketball",
          "Volleyball"]


@app.route("/", methods=["GET", "POST"])
def index():
    return render_template("index.html", sports=SPORTS)


@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing Name")

    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Missing Sport")

    if sport not in SPORTS:
        return render_template("error.html", message="Missing Sport is Not Valid")

    rawData = data(name=name, sports=sport)
    db.session.add(rawData)
    db.session.commit()
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    allData = data.query.all()
    print(allData)
    return render_template("success.html", allData=allData)
