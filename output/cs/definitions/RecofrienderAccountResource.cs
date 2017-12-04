using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RecofrienderAccountResource {
    [DataMember(Name = "platformId")]
    string PlatformId {get; set;}

    [DataMember(Name = "contacts")]
    RecofrienderActionResource[] Contacts {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RecofrienderAccountResource {\n");
      sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
      sb.Append("  Contacts: ").Append(Contacts).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}