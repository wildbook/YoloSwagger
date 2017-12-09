using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoginAccountStateResource
    {
        [DataMember(Name = "state")]
        public LolLoginAccountStateType State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginAccountStateResource {\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}