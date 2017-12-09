using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsSpellBookPageDTO
    {
        [DataMember(Name = "createDate")]
        public ulong CreateDate { get; set; }

        [DataMember(Name = "current")]
        public bool Current { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "pageId")]
        public uint PageId { get; set; }

        [DataMember(Name = "slotEntries")]
        public CollectionsLcdsSlotEntry[] SlotEntries { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSpellBookPageDTO {\n");
            sb.Append("  CreateDate: ").Append(CreateDate).Append("\n");
            sb.Append("  Current: ").Append(Current).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PageId: ").Append(PageId).Append("\n");
            sb.Append("  SlotEntries: ").Append(SlotEntries).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}