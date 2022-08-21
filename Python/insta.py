from cmath import log
from selenium import webdriver
import time

browser = webdriver.Chrome('chromedriver.exe')
browser.get('https://instagram.com/')
time.sleep(4)

def login():
    username = browser.find_element_by_xpath('/html/body/div[1]/section/main/article/div[2]/div[1]/div/form/div/div[1]/div/label/input')
    username.send_keys('nahseez365')
    time.sleep(4)
    password = browser.find_element_by_xpath('/html/body/div[1]/section/main/article/div[2]/div[1]/div/form/div/div[2]/div/label/input')
    password.send_keys('Zeeshan@92')
    password.submit()
    time.sleep(4)

login()

def notification():
    Notnow = browser.find_element_by_xpath('/html/body/div[1]/section/main/div/div/div/div/button').click()
    time.sleep(4)
    noti = browser.find_element_by_xpath('/html/body/div[6]/div/div/div/div[3]/button[2]').click()

notification()

def message():
    messageClick = browser.find_element_by_class_name('xWeGp')
    messageClick.click()
    time.sleep(6)

message()

def final():
    chatIcon = browser.find_element_by_xpath('/html/body/div[1]/section/div/div[2]/div/div/div[1]/div[2]/div/div/div/div/div[1]/a/div/div[2]/div[2]/div/div').click()
    time.sleep(7)
    msgbox = browser.find_element_by_tag_name('textarea')
    for i in range(0, 100):
        msgbox.send_keys("Sorry baby")
        send = browser.find_element_by_xpath('/html/body/div[1]/section/div/div[2]/div/div/div[2]/div[2]/div/div[2]/div/div/div[3]/button')
        send.click()

final()
