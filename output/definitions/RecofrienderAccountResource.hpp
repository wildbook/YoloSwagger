#ifndef SWAGGER_TYPES_RecofrienderAccountResource_HPP
#define SWAGGER_TYPES_RecofrienderAccountResource_HPP
#include <json.hpp>
#include "RecofrienderActionResource.hpp"
namespace test {
  // 
  struct RecofrienderAccountResource {
'    // 
    uint64_t accountId;
    // 
    std::vector<RecofrienderActionResource> contacts;
    // 
    std::string platformId;
  };

  void to_json(nlohmann::json& j, const RecofrienderAccountResource& v) {
    j["accountId"] = v.accountId;
    j["contacts"] = v.contacts;
    j["platformId"] = v.platformId;
  }

  void from_json(const nlohmann::json& j, RecofrienderAccountResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderAccountResource_HPP
