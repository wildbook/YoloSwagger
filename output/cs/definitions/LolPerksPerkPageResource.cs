using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksPerkPageResource {
    [DataMember(Name = "subStyleId")]
    int SubStyleId {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "isEditable")]
    bool IsEditable {get; set;}

    [DataMember(Name = "isValid")]
    bool IsValid {get; set;}

    [DataMember(Name = "order")]
    int Order {get; set;}

    [DataMember(Name = "selectedPerkIds")]
    int[] SelectedPerkIds {get; set;}

    [DataMember(Name = "formatVersion")]
    int FormatVersion {get; set;}

    [DataMember(Name = "primaryStyleId")]
    int PrimaryStyleId {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "isActive")]
    bool IsActive {get; set;}

    [DataMember(Name = "isDeletable")]
    bool IsDeletable {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksPerkPageResource {\n");
      sb.Append("  SubStyleId: ").Append(SubStyleId).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  IsEditable: ").Append(IsEditable).Append("\n");
      sb.Append("  IsValid: ").Append(IsValid).Append("\n");
      sb.Append("  Order: ").Append(Order).Append("\n");
      sb.Append("  SelectedPerkIds: ").Append(SelectedPerkIds).Append("\n");
      sb.Append("  FormatVersion: ").Append(FormatVersion).Append("\n");
      sb.Append("  PrimaryStyleId: ").Append(PrimaryStyleId).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  IsActive: ").Append(IsActive).Append("\n");
      sb.Append("  IsDeletable: ").Append(IsDeletable).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}