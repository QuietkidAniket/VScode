from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By


url = input("Enter the youtube video link : ")

# chrome webdriver
driver = webdriver.Chrome()
driver.get(url)

print(driver)
