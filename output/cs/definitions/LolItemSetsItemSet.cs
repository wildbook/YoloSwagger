using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolItemSetsItemSet
    {
        [DataMember(Name = "associatedChampions")]
        int[] AssociatedChampions { get; set; }

        [DataMember(Name = "associatedMaps")]
        int[] AssociatedMaps { get; set; }

        [DataMember(Name = "blocks")]
        LolItemSetsItemSetBlock[] Blocks { get; set; }

        [DataMember(Name = "map")]
        string Map { get; set; }

        [DataMember(Name = "mode")]
        string Mode { get; set; }

        [DataMember(Name = "preferredItemSlots")]
        LolItemSetsPreferredItemSlot[] PreferredItemSlots { get; set; }

        [DataMember(Name = "sortrank")]
        int Sortrank { get; set; }

        [DataMember(Name = "startedFrom")]
        string StartedFrom { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "uid")]
        string Uid { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsItemSet {\n");
            sb.Append("  AssociatedChampions: ").Append(AssociatedChampions).Append("\n");
            sb.Append("  AssociatedMaps: ").Append(AssociatedMaps).Append("\n");
            sb.Append("  Blocks: ").Append(Blocks).Append("\n");
            sb.Append("  Map: ").Append(Map).Append("\n");
            sb.Append("  Mode: ").Append(Mode).Append("\n");
            sb.Append("  PreferredItemSlots: ").Append(PreferredItemSlots).Append("\n");
            sb.Append("  Sortrank: ").Append(Sortrank).Append("\n");
            sb.Append("  StartedFrom: ").Append(StartedFrom).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Uid: ").Append(Uid).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}