using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesGameflowGameData
    {
        [DataMember(Name = "queue")]
        public LolLeaguesQueue Queue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesGameflowGameData {\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}