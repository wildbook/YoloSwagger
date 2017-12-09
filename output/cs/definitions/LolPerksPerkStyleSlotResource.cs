using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkStyleSlotResource
    {
        [DataMember(Name = "perks")]
        public int[] Perks { get; set; }

        [DataMember(Name = "slotLabel")]
        public string SlotLabel { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkStyleSlotResource {\n");
            sb.Append("  Perks: ").Append(Perks).Append("\n");
            sb.Append("  SlotLabel: ").Append(SlotLabel).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}