#ifndef SWAGGER_TYPES_RecofrienderAccountResource_HPP
#define SWAGGER_TYPES_RecofrienderAccountResource_HPP
#include <json.hpp>
#include "RecofrienderActionResource.hpp"
namespace leagueapi {
  // 
  struct RecofrienderAccountResource {
    // 
    std::string platformId;
    // 
    std::vector<RecofrienderActionResource> contacts;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderAccountResource& v) {
    j["platformId"] = v.platformId;
    j["contacts"] = v.contacts;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderAccountResource& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderAccountResource_HPP
