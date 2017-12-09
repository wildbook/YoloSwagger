using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersQueue
    {
        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "minLevel")]
        public uint MinLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersQueue {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}