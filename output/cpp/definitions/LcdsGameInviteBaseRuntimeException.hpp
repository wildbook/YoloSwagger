#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameInviteBaseRuntimeException_t {
    std::string rootCauseClassname;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameInviteBaseRuntimeException_t& v) {
    j["rootCauseClassname"] = v.rootCauseClassname;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameInviteBaseRuntimeException_t& v) {
    v.rootCauseClassname = j.at("rootCauseClassname").get<std::string>();
  }
  inline std::string to_string(const LcdsGameInviteBaseRuntimeException_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
