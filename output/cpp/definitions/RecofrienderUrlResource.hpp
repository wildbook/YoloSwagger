#ifndef SWAGGER_TYPES_RecofrienderUrlResource_HPP
#define SWAGGER_TYPES_RecofrienderUrlResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderUrlResource {
    // 
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderUrlResource& v) {
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderUrlResource& v) {
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderUrlResource_HPP
