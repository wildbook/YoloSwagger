using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsQueue
    {
        [DataMember(Name = "isTeamBuilderManaged")]
        public bool IsTeamBuilderManaged { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsQueue {\n");
            sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}