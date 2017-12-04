#ifndef SWAGGER_TYPES_LolReplaysGameflowGameClient_HPP
#define SWAGGER_TYPES_LolReplaysGameflowGameClient_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolReplaysGameflowGameClient {
'    // 
    bool running;
  };

  void to_json(nlohmann::json& j, const LolReplaysGameflowGameClient& v) {
    j["running"] = v.running;
  }

  void from_json(const nlohmann::json& j, LolReplaysGameflowGameClient& v) {
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowGameClient_HPP
