using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // Represents the parameters of a call to a provided callback.
    [DataContract]
    struct BindingCallbackEvent
    {
        // ID of the callback being invoked
        [DataMember(Name = "id")]
        uint Id { get; set; }

        // Callback parameters
        [DataMember(Name = "parameters")]
        dynamic[] Parameters { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingCallbackEvent {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Parameters: ").Append(Parameters).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}