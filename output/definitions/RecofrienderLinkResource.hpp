#ifndef SWAGGER_TYPES_RecofrienderLinkResource_HPP
#define SWAGGER_TYPES_RecofrienderLinkResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct RecofrienderLinkResource {
'    // 
    bool linked;
    // 
    std::string name;
    // 
    std::string reason;
  };

  void to_json(nlohmann::json& j, const RecofrienderLinkResource& v) {
    j["linked"] = v.linked;
    j["name"] = v.name;
    j["reason"] = v.reason;
  }

  void from_json(const nlohmann::json& j, RecofrienderLinkResource& v) {
    v.linked = j.at("linked").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.reason = j.at("reason").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderLinkResource_HPP
