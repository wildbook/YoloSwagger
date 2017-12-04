#ifndef SWAGGER_TYPES_RecofrienderLinkResource_HPP
#define SWAGGER_TYPES_RecofrienderLinkResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderLinkResource {
    // 
    std::string reason;
    // 
    bool linked;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource& v) {
    j["reason"] = v.reason;
    j["linked"] = v.linked;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource& v) {
    v.reason = j.at("reason").get<std::string>;
    v.linked = j.at("linked").get<bool>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderLinkResource_HPP
