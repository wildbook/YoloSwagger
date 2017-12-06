using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct CollectionsLcdsMasteryBookPageDTO
    {
        [DataMember(Name = "createDate")]
        ulong CreateDate { get; set; }

        [DataMember(Name = "current")]
        bool Current { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "pageId")]
        uint PageId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "talentEntries")]
        CollectionsLcdsTalentEntry[] TalentEntries { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsMasteryBookPageDTO {\n");
            sb.Append("  CreateDate: ").Append(CreateDate).Append("\n");
            sb.Append("  Current: ").Append(Current).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PageId: ").Append(PageId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  TalentEntries: ").Append(TalentEntries).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}