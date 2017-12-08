using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTQuestionResponse
    {
        [DataMember(Name = "questionId")]
        ulong QuestionId { get; set; }

        [DataMember(Name = "responseData")]
        dynamic ResponseData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTQuestionResponse {\n");
            sb.Append("  QuestionId: ").Append(QuestionId).Append("\n");
            sb.Append("  ResponseData: ").Append(ResponseData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}