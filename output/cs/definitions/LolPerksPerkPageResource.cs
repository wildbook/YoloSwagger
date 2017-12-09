using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkPageResource
    {
        [DataMember(Name = "formatVersion")]
        public int FormatVersion { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "isActive")]
        public bool IsActive { get; set; }

        [DataMember(Name = "isDeletable")]
        public bool IsDeletable { get; set; }

        [DataMember(Name = "isEditable")]
        public bool IsEditable { get; set; }

        [DataMember(Name = "isValid")]
        public bool IsValid { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "order")]
        public int Order { get; set; }

        [DataMember(Name = "primaryStyleId")]
        public int PrimaryStyleId { get; set; }

        [DataMember(Name = "selectedPerkIds")]
        public int[] SelectedPerkIds { get; set; }

        [DataMember(Name = "subStyleId")]
        public int SubStyleId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkPageResource {\n");
            sb.Append("  FormatVersion: ").Append(FormatVersion).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsActive: ").Append(IsActive).Append("\n");
            sb.Append("  IsDeletable: ").Append(IsDeletable).Append("\n");
            sb.Append("  IsEditable: ").Append(IsEditable).Append("\n");
            sb.Append("  IsValid: ").Append(IsValid).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Order: ").Append(Order).Append("\n");
            sb.Append("  PrimaryStyleId: ").Append(PrimaryStyleId).Append("\n");
            sb.Append("  SelectedPerkIds: ").Append(SelectedPerkIds).Append("\n");
            sb.Append("  SubStyleId: ").Append(SubStyleId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}