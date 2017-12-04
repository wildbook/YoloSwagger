#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesGameflowSession_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesGameflowSession_HPP
#include <json.hpp>
#include "LolSimpleDialogMessagesGameflowPhase.hpp"
namespace test {
  // 
  struct LolSimpleDialogMessagesGameflowSession {
'    // 
    LolSimpleDialogMessagesGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolSimpleDialogMessagesGameflowSession& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolSimpleDialogMessagesGameflowSession& v) {
    v.phase = j.at("phase").get<LolSimpleDialogMessagesGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesGameflowSession_HPP
