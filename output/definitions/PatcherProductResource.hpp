#ifndef SWAGGER_TYPES_PatcherProductResource_HPP
#define SWAGGER_TYPES_PatcherProductResource_HPP
#include <json.hpp>
#include "PatcherComponentResource.hpp"
namespace test {
  // 
  struct PatcherProductResource {
'    // 
    std::vector<PatcherComponentResource> components;
    // 
    std::string id;
    // 
    uint32_t refresh_period;
  };

  void to_json(nlohmann::json& j, const PatcherProductResource& v) {
    j["components"] = v.components;
    j["id"] = v.id;
    j["refresh_period"] = v.refresh_period;
  }

  void from_json(const nlohmann::json& j, PatcherProductResource& v) {
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>;
    v.id = j.at("id").get<std::string>;
    v.refresh_period = j.at("refresh_period").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_PatcherProductResource_HPP
