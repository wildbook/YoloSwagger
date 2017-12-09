using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTSurveyResults
    {
        [DataMember(Name = "actions")]
        public LolPftPFTEvent[] Actions { get; set; }

        [DataMember(Name = "questionResponses")]
        public LolPftPFTQuestionResponse[] QuestionResponses { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTSurveyResults {\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  QuestionResponses: ").Append(QuestionResponses).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}