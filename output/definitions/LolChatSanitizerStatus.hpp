#ifndef SWAGGER_TYPES_LolChatSanitizerStatus_HPP
#define SWAGGER_TYPES_LolChatSanitizerStatus_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatSanitizerStatus {
'    // 
    std::string locale;
    // 
    std::string platformID;
    // 
    bool ready;
  };

  void to_json(nlohmann::json& j, const LolChatSanitizerStatus& v) {
    j["locale"] = v.locale;
    j["platformID"] = v.platformID;
    j["ready"] = v.ready;
  }

  void from_json(const nlohmann::json& j, LolChatSanitizerStatus& v) {
    v.locale = j.at("locale").get<std::string>;
    v.platformID = j.at("platformID").get<std::string>;
    v.ready = j.at("ready").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatSanitizerStatus_HPP
