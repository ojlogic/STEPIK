import fastapi
import database
import pydantic_models
import config

api = fastapi.FastAPI()

resource = {"Ответ":"Который возвращает сервер"}

@api.get('/')
def index():
    return resource

@api.get('/hello')
def hello():
    return "hello"

@api.get('/about/us')
def about():
    return {"We Are":"Legion"}
