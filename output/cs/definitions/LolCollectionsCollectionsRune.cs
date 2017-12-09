using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsRune
    {
        [DataMember(Name = "runeId")]
        public uint RuneId { get; set; }

        [DataMember(Name = "runeSlotId")]
        public uint RuneSlotId { get; set; }

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