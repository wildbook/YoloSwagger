using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectChampSelectMySelection
    {
        [DataMember(Name = "selectedSkinId")]
        int? SelectedSkinId { get; set; }

        [DataMember(Name = "spell1Id")]
        ulong? Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        ulong? Spell2Id { get; set; }

        [DataMember(Name = "wardSkinId")]
        long? WardSkinId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectChampSelectMySelection {\n");
            sb.Append("  SelectedSkinId: ").Append(SelectedSkinId).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  WardSkinId: ").Append(WardSkinId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}