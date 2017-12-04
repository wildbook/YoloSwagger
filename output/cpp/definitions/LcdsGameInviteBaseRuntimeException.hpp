#ifndef SWAGGER_TYPES_LcdsGameInviteBaseRuntimeException_HPP
#define SWAGGER_TYPES_LcdsGameInviteBaseRuntimeException_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsGameInviteBaseRuntimeException {
    // 
    std::string rootCauseClassname;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameInviteBaseRuntimeException& v) {
    j["rootCauseClassname"] = v.rootCauseClassname;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameInviteBaseRuntimeException& v) {
    v.rootCauseClassname = j.at("rootCauseClassname").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsGameInviteBaseRuntimeException_HPP
