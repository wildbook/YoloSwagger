#ifndef SWAGGER_TYPES_RemotingPrivilege_HPP
#define SWAGGER_TYPES_RemotingPrivilege_HPP
#include <json.hpp>
namespace leagueapi {
  // Well-known privilege levels for bindable functions.
  enum class RemotingPrivilege {
    // Maximum privilege level for remote administrators.
    Admin = 254,
    // Maximum possible privilege level. Used for in-process function calls.
    Local = 255,
    // Minimum possible privilege level.
    None = 0,
    // Maximum privilege level for remote non-administrators.
    User = 127,
  };

  void to_json(nlohmann::json& j, const RemotingPrivilege& v) {
    switch(v) {
      case RemotingPrivilege::Admin:
        j = "Admin";
      break;
      case RemotingPrivilege::Local:
        j = "Local";
      break;
      case RemotingPrivilege::None:
        j = "None";
      break;
      case RemotingPrivilege::User:
        j = "User";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RemotingPrivilege& v) {
    const auto s& = j.get<std::string>();
    if(s == "Admin"){
      v = RemotingPrivilege::Admin;
      return;
    }
    if(s == "Local"){
      v = RemotingPrivilege::Local;
      return;
    }
    if(s == "None"){
      v = RemotingPrivilege::None;
      return;
    }
    if(s == "User"){
      v = RemotingPrivilege::User;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RemotingPrivilege_HPP
