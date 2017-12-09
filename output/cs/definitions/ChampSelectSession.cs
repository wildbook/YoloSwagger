using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectSession
    {
        [DataMember(Name = "timer")]
        public ChampSelectTimer Timer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectSession {\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}