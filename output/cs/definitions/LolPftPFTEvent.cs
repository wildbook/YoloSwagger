using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTEvent
    {
        [DataMember(Name = "action")]
        string Action { get; set; }

        [DataMember(Name = "data")]
        dynamic[] Data { get; set; }

        [DataMember(Name = "playerSurveyId")]
        ulong PlayerSurveyId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTEvent {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  PlayerSurveyId: ").Append(PlayerSurveyId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}