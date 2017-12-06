using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsGameDataChampionMasteryGroup
    {
        [DataMember(Name = "id")]
        uint Id { get; set; }

        [DataMember(Name = "rows")]
        LolCollectionsGameDataChampionMasteryRow[] Rows { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsGameDataChampionMasteryGroup {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Rows: ").Append(Rows).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}