import { Injectable } from '@angular/core';

import { DropdownQuestion } from './question-dropdown';
import { QuestionBase } from './question-base';
import { TextboxQuestion } from './question-textbox';
import { of } from 'rxjs';

@Injectable()
export class QuestionService {

  // TODO: get from a remote source of question metadata
  getQuestions() {

    const questions: QuestionBase<string>[] = [

      // new DropdownQuestion({
      //   key: 'brave',
      //   label: 'Bravery Rating',
      //   options: [
      //     {key: 'solid',  value: 'Solid'},
      //     {key: 'great',  value: 'Great'},
      //     {key: 'good',   value: 'Good'},
      //     {key: 'unproven', value: 'Unproven'}
      //   ],
      //   order: 3
      // }),

      new TextboxQuestion({
        key: 'firstName',
        label: 'Company name',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 1
      }),

      new TextboxQuestion({
        key: 'telephone',
        label: 'Mobile phonenumber',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 2
      }),


      new DropdownQuestion({
        key: 'employees',
        label: 'Amount of employees',
        options: [
          {key: '1-10',  value: '1-10'},
          {key: '11-20',  value: '11-20'},
          {key: '21-50',   value: '21-50'},
          {key: '51-300', value: '51-300'},
          {key: '300+', value: '300+'}
        ],
        order: 3
      }),
      // new TextboxQuestion({
      //   key: 'employees',
      //   label: 'Amount of employees',
      //   value: 'Tijdelijke placeholder',
      //   required: true,
      //   order: 3
      // }),

      new TextboxQuestion({
        key: 'coc',
        label: 'CoC number',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 4
      }),

      new TextboxQuestion({
        key: 'vat',
        label: 'VAT number',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 5
      }),

      new TextboxQuestion({
        key: 'iban',
        label: 'IBAN',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 6
      }),

      new TextboxQuestion({
        key: 'budget',
        label: 'Budget',
        value: 'Tijdelijke placeholder',
        required: false,
        order: 7
      }),

      new TextboxQuestion({ // Deze moet ernaast staan
        key: 'description',
        label: 'Description',
        value: 'Tijdelijke placeholder',
        required: true,
        order: 8
      })

      // new TextboxQuestion({
      //   key: 'emailAddress',
      //   label: 'Email',
      //   type: 'email',
      //   order: 2
      // })
    ];

    return of(questions.sort((a, b) => a.order - b.order));
  }
}
