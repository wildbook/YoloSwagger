using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkStyleResource
    {
        [DataMember(Name = "allowedSubStyles")]
        public int[] AllowedSubStyles { get; set; }

        [DataMember(Name = "defaultPageName")]
        public string DefaultPageName { get; set; }

        [DataMember(Name = "defaultPerks")]
        public int[] DefaultPerks { get; set; }

        [DataMember(Name = "defaultSubStyle")]
        public int DefaultSubStyle { get; set; }

        [DataMember(Name = "iconPath")]
        public string IconPath { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "isAdvanced")]
        public bool IsAdvanced { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "slots")]
        public LolPerksPerkStyleSlotResource[] Slots { get; set; }

        [DataMember(Name = "subStyleBonus")]
        public LolPerksPerkSubStyleBonusResource[] SubStyleBonus { get; set; }

        [DataMember(Name = "tooltip")]
        public string Tooltip { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkStyleResource {\n");
            sb.Append("  AllowedSubStyles: ").Append(AllowedSubStyles).Append("\n");
            sb.Append("  DefaultPageName: ").Append(DefaultPageName).Append("\n");
            sb.Append("  DefaultPerks: ").Append(DefaultPerks).Append("\n");
            sb.Append("  DefaultSubStyle: ").Append(DefaultSubStyle).Append("\n");
            sb.Append("  IconPath: ").Append(IconPath).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsAdvanced: ").Append(IsAdvanced).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Slots: ").Append(Slots).Append("\n");
            sb.Append("  SubStyleBonus: ").Append(SubStyleBonus).Append("\n");
            sb.Append("  Tooltip: ").Append(Tooltip).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}