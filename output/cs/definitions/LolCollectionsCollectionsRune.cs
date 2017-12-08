using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsCollectionsRune
    {
        [DataMember(Name = "runeId")]
        uint RuneId { get; set; }

        [DataMember(Name = "runeSlotId")]
        uint RuneSlotId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsRune {\n");
            sb.Append("  RuneId: ").Append(RuneId).Append("\n");
            sb.Append("  RuneSlotId: ").Append(RuneSlotId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}