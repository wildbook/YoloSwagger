using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootCollectionsChampionMinimal
    {
        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "ownership")]
        public LolLootCollectionsOwnership Ownership { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootCollectionsChampionMinimal {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}