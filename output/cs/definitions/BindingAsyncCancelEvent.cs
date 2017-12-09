using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Represents a cancelled asynchronous operation.
    [DataContract]
    public struct BindingAsyncCancelEvent
    {
        // Asynchronous operation token
        [DataMember(Name = "asyncToken")]
        public uint AsyncToken { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingAsyncCancelEvent {\n");
            sb.Append("  AsyncToken: ").Append(AsyncToken).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}