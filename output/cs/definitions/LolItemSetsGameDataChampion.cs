using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolItemSetsGameDataChampion
    {
        [DataMember(Name = "alias")]
        public string Alias { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsGameDataChampion {\n");
            sb.Append("  Alias: ").Append(Alias).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}