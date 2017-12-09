using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Represents the parameters of a call to a provided callback.
    [DataContract]
    public struct BindingCallbackEvent
    {
        // ID of the callback being invoked
        [DataMember(Name = "id")]
        public uint Id { get; set; }

        // Callback parameters
        [DataMember(Name = "parameters")]
        public dynamic[] Parameters { get; set; }

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