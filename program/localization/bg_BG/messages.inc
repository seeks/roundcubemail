<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/messages.inc                                      |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/messages/
*/

$messages = array();
$messages['errortitle']  = 'Възникна грешка!';
$messages['loginfailed']  = 'Неуспешен вход';
$messages['cookiesdisabled'] = 'Вашият браузър не приема cookies';
$messages['sessionerror'] = 'Невалидна или изтекла сесия';
$messages['storageerror'] = 'Неуспешно свързване към IMAP сървъра';
$messages['servererror'] = 'Грешка!';
$messages['servererrormsg'] = 'Сървърна грешка: $msg';
$messages['dberror'] = 'Грешка с базата данни!';
$messages['requesttimedout'] = 'Заявката е с изтекло време';
$messages['errorreadonly'] = 'Операцията не може да бъде изпълнена. Папката е с права само за четене';
$messages['errornoperm'] = 'Операцията не може да бъде изпълнена. Отказани права за достъп';
$messages['erroroverquota'] = 'Невъзможно извършване на действието, няма достатъчно свободно дисково пространство.';
$messages['erroroverquotadelete'] = 'Няма достатъчно свободно дисково пространство. Ползвайте SHIFT+DEL за да изтриете съобщение.';
$messages['invalidrequest'] = 'Невалидна заявка! Данните не са съхранени.';
$messages['invalidhost'] = 'Невалидно име на сървър';
$messages['nomessagesfound'] = 'Няма съобщения';
$messages['loggedout'] = 'Довиждане!';
$messages['mailboxempty'] = 'Кутията е празна';
$messages['refreshing'] = 'Опресняване...';
$messages['loading'] = 'Зареждане...';
$messages['uploading'] = 'Качване на файла...';
$messages['uploadingmany'] = 'Качване на файловете...';
$messages['loadingdata'] = 'Зареждане на данни...';
$messages['checkingmail'] = 'Проверка за нови писма...';
$messages['sendingmessage'] = 'Изпращане на писмото...';
$messages['messagesent'] = 'Писмото е изпратено успешно';
$messages['savingmessage'] = 'Записване на писмото...';
$messages['messagesaved'] = 'Писмото е записано в Чернови';
$messages['successfullysaved'] = 'Записано';
$messages['addedsuccessfully'] = 'Контакта е добавен в адресната книга';
$messages['contactexists'] = 'Контакт с този e-mail адрес вече същестува';
$messages['contactnameexists'] = 'Контакт със същото име вече съществува';
$messages['blockedimages'] = 'С оглед на Вашата сигурност, изображенията в това писмо са блокирани.';
$messages['encryptedmessage'] = 'Това е кодирано писмо и не може да бъде показано. Съжаляваме!';
$messages['nocontactsfound'] = 'Няма намерени контакти';
$messages['contactnotfound'] = 'Исканият контакт не е намерен';
$messages['contactsearchonly'] = 'Въведете нещо в полето за търсене за да търсите контакти';
$messages['sendingfailed'] = 'Изпращането неуспешно';
$messages['senttooquickly'] = 'Моля, изчакайте $sec секунда(и) преди да изпратите съобщението';
$messages['errorsavingsent'] = 'Възникна грешка при записването на съобщението';
$messages['errorsaving'] = 'Възникна грешка при записването';
$messages['errormoving'] = 'Писмото не може да бъде преместено';
$messages['errorcopying'] = 'Съобщенията не могат да бъдат копирани';
$messages['errordeleting'] = 'Писмото не може да бъде изтрито';
$messages['errormarking'] = 'Съобщението не може да бъде маркирано';
$messages['deletecontactconfirm']  = 'Искате ли да изтриете маркираните контакти?';
$messages['deletegroupconfirm']  = 'Искате ли да изтриете избраната група?';
$messages['deletemessagesconfirm'] = 'Искате ли да изтриете маркираните съобщения?';
$messages['deletefolderconfirm']  = 'Искате ли да изтриете тази папка?';
$messages['purgefolderconfirm']  = 'Искате ли да изтриете всички писма в тази папка?';
$messages['contactdeleting'] = 'Изтриване на контакт(и)...';
$messages['groupdeleting'] = 'Изтриване на група...';
$messages['folderdeleting'] = 'Изтриване на папка...';
$messages['foldermoving'] = 'Преместване на папка...';
$messages['foldersubscribing'] = 'Абониране...';
$messages['folderunsubscribing'] = 'Отписване на папка...';
$messages['formincomplete'] = 'Не сте попълнили всички полета';
$messages['noemailwarning'] = 'Моля, въведете валиден e-mail адрес';
$messages['nonamewarning']  = 'Моля, въведете име';
$messages['nopagesizewarning'] = 'Въведете брой редове на страница';
$messages['nosenderwarning'] = 'Моля въведете валиден e-mail адрес на подателя';
$messages['norecipientwarning'] = 'Въведете поне един получател';
$messages['nosubjectwarning']  = 'Полето "Заглавие" е празно. Искате ли да въведете заглавие?';
$messages['nobodywarning'] = 'Изпрати това писмо без текст?';
$messages['notsentwarning'] = 'Писмото не е изпратено. Искате ли да бъде унищожено?';
$messages['noldapserver'] = 'Изберете LDAP сървър за търсене';
$messages['nosearchname'] = 'Моля, въведете Име на контакта или e-mail адрес';
$messages['notuploadedwarning'] = 'Все още не са качени всички прикачени файлове. Моля изчакайте или откажете качването.';
$messages['searchsuccessful'] = '$nr намерени писма';
$messages['contactsearchsuccessful'] = '$nr намерени контакти.';
$messages['searchnomatch'] = 'Търсенето не откри съвпадения';
$messages['searching'] = 'Търсене...';
$messages['checking'] = 'Проверка...';
$messages['nospellerrors'] = 'Не са открити правописни грешки';
$messages['folderdeleted'] = 'Папката е изтрита';
$messages['foldersubscribed'] = 'Абонирането успешно';
$messages['folderunsubscribed'] = 'Отписването успешно';
$messages['folderpurged'] = 'Папката е изпразнена';
$messages['folderexpunged'] = 'Уплътняването успешно';
$messages['deletedsuccessfully'] = 'Изтриването е успешно';
$messages['converting'] = 'Премахване форматирането на писмото...';
$messages['messageopenerror'] = 'Писмото не може да бъде заредено от сървъра';
$messages['fileuploaderror'] = 'Грешка при прикачването на файла';
$messages['filesizeerror'] = 'Прикаченият файл надвишава лимита от $size';
$messages['copysuccess'] = 'Successfully copied $nr contacts.';
$messages['movesuccess'] = 'Successfully moved $nr contacts.';
$messages['copyerror'] = 'Could not copy any contacts.';
$messages['moveerror'] = 'Could not move any contacts.';
$messages['sourceisreadonly'] = 'Този източник на адреси е само за четене';
$messages['errorsavingcontact'] = 'Грешка при записването на адреса';
$messages['movingmessage'] = 'Преместване на съобщение...';
$messages['copyingmessage'] = 'Копиране на съобщение(я)...';
$messages['copyingcontact'] = 'Копиране на контакт(и)...';
$messages['movingcontact'] = 'Moving contact(s)...';
$messages['deletingmessage'] = 'Изтриване на съобщение(я)...';
$messages['markingmessage'] = 'Маркиране на съобщение(я)...';
$messages['addingmember'] = 'Добавяне на контакт(и) в групата...';
$messages['removingmember'] = 'Премахване на контакт(и) от групата...';
$messages['receiptsent'] = 'Обратната разписка е изпратена.';
$messages['errorsendingreceipt'] = 'Грешка при изпращането на обратна разписка.';
$messages['deleteidentityconfirm'] = 'Наистина ли желаете да изтриете тази самоличност?';
$messages['nodeletelastidentity'] = 'Не можете да изтриете тази самоличност, трябва да имате поне една.';
$messages['forbiddencharacter'] = 'Името на папката съдържа непозволени символи';
$messages['selectimportfile'] = 'Моля изберете файл за качване';
$messages['addresswriterror'] = 'Избраната адресна книга не може да бъде записвана';
$messages['contactaddedtogroup'] = 'Контактите бяха успешно добавени към групата';
$messages['contactremovedfromgroup'] = 'Контактите бяха успешно премахнати от групата';
$messages['nogroupassignmentschanged'] = 'Няма променени групи.';
$messages['importwait'] = 'Импорт, моля изчакайте...';
$messages['importformaterror'] = 'Импорта пропадна! Каченият файл не е с валидни данни.';
$messages['importconfirm'] = '<b>Успешно са импортирани $inserted контакта, вече съществуващите $skipped контакта са пропуснати</b>:<p><em>$names</em></p>';
$messages['importconfirmskipped'] = 'b>Съществуващите записи $skipped са пропуснати</b>';
$messages['importmessagesuccess'] = 'Successfully imported $nr messages';
$messages['importmessageerror'] = 'Import failed! The uploaded file is not a valid message or mailbox file';
$messages['opnotpermitted'] = 'Операцията не е позволена!';
$messages['nofromaddress'] = 'Липсва e-mail адрес за избраната самоличност';
$messages['editorwarning'] = 'Превключването на редактора в текстов режим ще доведе до загуба на форматирането на текса. Сигурни ли сте, че искате да продължите?';
$messages['httpreceivedencrypterror'] = 'Фатална конфигурационна грешка. Моля, свържете се веднага с администратора. <b>Съобщението Ви не може да бъде изпратено.</b>';
$messages['smtpconnerror'] = 'SMTP грешка ($code): Няма връзка със сървъра';
$messages['smtpautherror'] = 'SMTP грешка ($code): Грешни потребител/парола';
$messages['smtpfromerror'] = 'SMTP грешка ($code): Не може да бъде изпратено писмо от "$from" ($msg)';
$messages['smtptoerror'] = 'SMTP грешка ($code): Не може да бъде изпратено писмо до "$to" ($msg)';
$messages['smtprecipientserror'] = 'SMTP грешка: Не може да бъде обработен списъка с получатели';
$messages['smtperror'] = 'SMTP грешка: $msg';
$messages['emailformaterror'] = 'Невалиден e-mail адрес: $email';
$messages['toomanyrecipients'] = 'Прекалено много адреси за изпращане (максимум: $max).';
$messages['maxgroupmembersreached'] = 'Броя на членовете на групата е повече от максималния: $max.';
$messages['internalerror'] = 'Възникна вътрешна грешка. Моля опитайте отново';
$messages['contactdelerror'] = 'Не мога да изтрия контакта';
$messages['contactdeleted'] = 'Контактът беше изтрит';
$messages['contactrestoreerror'] = 'Неуспешно възстановяване на изтрите контакт(и).';
$messages['contactrestored'] = 'Контактът(-ите) са възстановени успешно';
$messages['groupdeleted'] = 'Групата беше  изтрита';
$messages['grouprenamed'] = 'Групата беше преименувана';
$messages['groupcreated'] = 'Групата беше създадена';
$messages['savedsearchdeleted'] = 'Запазаните търсения са изтрити успешно.';
$messages['savedsearchdeleteerror'] = 'Изтриването на запазените търсения е неуспешно.';
$messages['savedsearchcreated'] = 'Запазените търсения са създадени успешно.';
$messages['savedsearchcreateerror'] = 'Създаването на запазено търсене е неуспешно';
$messages['messagedeleted'] = 'Съобщението  беше  изтрито';
$messages['messagemoved'] = 'Съобщението беше преместено';
$messages['messagecopied'] = 'Съобщението беше копирано';
$messages['messagemarked'] = 'Съобщението беше маркирано';
$messages['autocompletechars'] = 'Въведете минимум $min знака, за да започне автоматичното попълване';
$messages['autocompletemore'] = 'Намерените съвпадения са прекалено много. Моля напишете още символи.';
$messages['namecannotbeempty'] = 'Полето за име не може да бъде празно';
$messages['nametoolong'] = 'Името е прекалено дълго';
$messages['folderupdated'] = 'Папката е обновена';
$messages['foldercreated'] = 'Папката е създадена';
$messages['invalidimageformat'] = 'Невалиден формат на изображението';
$messages['mispellingsfound'] = 'В съобщението са намерени правописни грешки.';
$messages['parentnotwritable'] = 'Създаването/преместването на папка в избраната родителска папка е неуспешно. Няма права за достъп.';
$messages['messagetoobig'] = 'Съобщението е прекалено голямо, за да бъде обработено.';
$messages['attachmentvalidationerror'] = 'ВНИМАНИЕ! Прикаченият файл е опасен, защото типа му не съвпада с този деклариран в съобщението.<br/><br/><em>Очакван: $expected; открит: $detected</em>';
$messages['noscriptwarning'] = 'ВНИМАНИЕ! Тази пощенска услуга изисква JavaScript за да функционира, моля включете поддръжката на JavaScript в настройките на браузъра Ви.';

?>
