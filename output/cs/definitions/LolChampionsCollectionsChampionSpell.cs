using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampionSpell
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionSpell {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}