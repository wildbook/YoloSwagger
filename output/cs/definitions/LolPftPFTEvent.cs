using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTEvent
    {
        [DataMember(Name = "action")]
        public string Action { get; set; }

        [DataMember(Name = "data")]
        public dynamic[] Data { get; set; }

        [DataMember(Name = "playerSurveyId")]
        public ulong PlayerSurveyId { get; set; }

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