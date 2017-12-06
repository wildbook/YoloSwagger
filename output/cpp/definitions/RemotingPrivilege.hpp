#pragma once
#include <json.hpp>
namespace leagueapi {
  // Well-known privilege levels for bindable functions.
  enum class RemotingPrivilege_t {
    // Maximum possible privilege level. Used for in-process function calls.
    Local_E = 255,
    // Minimum possible privilege level.
    None_E = 0,
    // Maximum privilege level for remote non-administrators.
    User_E = 127,
    // Maximum privilege level for remote administrators.
    Admin_E = 254,
  };

  inline void to_json(nlohmann::json& j, const RemotingPrivilege_t& v) {
    switch(v) {
      case RemotingPrivilege_t::Local_E:
        j = "Local";
      break;
      case RemotingPrivilege_t::None_E:
        j = "None";
      break;
      case RemotingPrivilege_t::User_E:
        j = "User";
      break;
      case RemotingPrivilege_t::Admin_E:
        j = "Admin";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RemotingPrivilege_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Local"){
      v = RemotingPrivilege_t::Local_E;
      return;
    }
    if(s == "None"){
      v = RemotingPrivilege_t::None_E;
      return;
    }
    if(s == "User"){
      v = RemotingPrivilege_t::User_E;
      return;
    }
    if(s == "Admin"){
      v = RemotingPrivilege_t::Admin_E;
      return;
    }
  }
}
