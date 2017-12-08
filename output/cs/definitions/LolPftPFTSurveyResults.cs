using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTSurveyResults
    {
        [DataMember(Name = "questionResponses")]
        LolPftPFTQuestionResponse[] QuestionResponses { get; set; }

        [DataMember(Name = "actions")]
        LolPftPFTEvent[] Actions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTSurveyResults {\n");
            sb.Append("  QuestionResponses: ").Append(QuestionResponses).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}