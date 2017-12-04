using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RecofrienderConfig {
    [DataMember(Name = "ContactDetailsUrlTemplate")]
    string ContactDetailsUrlTemplate {get; set;}

    [DataMember(Name = "ContactsUrlTemplate")]
    string ContactsUrlTemplate {get; set;}

    [DataMember(Name = "EnabledNetworks")]
    string[] EnabledNetworks {get; set;}

    [DataMember(Name = "ExternalCallTimeoutSeconds")]
    ulong ExternalCallTimeoutSeconds {get; set;}

    [DataMember(Name = "EnableSocial")]
    bool EnableSocial {get; set;}

    [DataMember(Name = "FaqLink")]
    string FaqLink {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RecofrienderConfig {\n");
      sb.Append("  ContactDetailsUrlTemplate: ").Append(ContactDetailsUrlTemplate).Append("\n");
      sb.Append("  ContactsUrlTemplate: ").Append(ContactsUrlTemplate).Append("\n");
      sb.Append("  EnabledNetworks: ").Append(EnabledNetworks).Append("\n");
      sb.Append("  ExternalCallTimeoutSeconds: ").Append(ExternalCallTimeoutSeconds).Append("\n");
      sb.Append("  EnableSocial: ").Append(EnableSocial).Append("\n");
      sb.Append("  FaqLink: ").Append(FaqLink).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}