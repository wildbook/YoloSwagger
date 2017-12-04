#ifndef SWAGGER_TYPES_PatcherProductResource_HPP
#define SWAGGER_TYPES_PatcherProductResource_HPP
#include <json.hpp>
#include "PatcherComponentResource.hpp"
namespace leagueapi {
  // 
  struct PatcherProductResource {
    // 
    uint32_t refresh_period;
    // 
    std::string id;
    // 
    std::vector<PatcherComponentResource> components;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductResource& v) {
    j["refresh_period"] = v.refresh_period;
    j["id"] = v.id;
    j["components"] = v.components;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductResource& v) {
    v.refresh_period = j.at("refresh_period").get<uint32_t>;
    v.id = j.at("id").get<std::string>;
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>;
  }

}
#endif // SWAGGER_TYPES_PatcherProductResource_HPP
