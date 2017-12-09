using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Represents a failed asynchronous operation.
    [DataContract]
    public struct BindingAsyncFailureEvent
    {
        // Asynchronous operation token
        [DataMember(Name = "asyncToken")]
        public uint AsyncToken { get; set; }

        // Error message
        [DataMember(Name = "error")]
        public string Error { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingAsyncFailureEvent {\n");
            sb.Append("  AsyncToken: ").Append(AsyncToken).Append("\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}