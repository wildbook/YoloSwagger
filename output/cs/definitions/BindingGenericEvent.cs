using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Represents generic data for an event.
  [DataContract]  struct BindingGenericEvent {
    // Event data
    [DataMember(Name = "data")]
    dynamic Data {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BindingGenericEvent {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}