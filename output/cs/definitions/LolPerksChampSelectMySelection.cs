using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksChampSelectMySelection
    {
        [DataMember(Name = "selectedSkinId")]
        public int? SelectedSkinId { get; set; }

        [DataMember(Name = "spell1Id")]
        public ulong? Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        public ulong? Spell2Id { get; set; }

        [DataMember(Name = "wardSkinId")]
        public long? WardSkinId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampSelectMySelection {\n");
            sb.Append("  SelectedSkinId: ").Append(SelectedSkinId).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  WardSkinId: ").Append(WardSkinId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}