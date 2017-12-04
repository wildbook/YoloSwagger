#ifndef SWAGGER_TYPES_PatcherComponentResource_HPP
#define SWAGGER_TYPES_PatcherComponentResource_HPP
#include <json.hpp>
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
namespace leagueapi {
  // 
  struct PatcherComponentResource {
    // 
    std::string install_dir;
    // 
    std::string locale;
    // 
    std::string region;
    // 
    std::string hostname;
    // 
    std::string remote_path;
    // 
    bool use_tls;
    // 
    std::vector<PatcherHeaderEntry> headers;
    // 
    bool copy_to_solution;
    // 
    PatcherComponentResourceType type;
    // 
    std::string id;
    // 
    PatcherComponentResourceHistory history;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource& v) {
    j["install_dir"] = v.install_dir;
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["hostname"] = v.hostname;
    j["remote_path"] = v.remote_path;
    j["use_tls"] = v.use_tls;
    j["headers"] = v.headers;
    j["copy_to_solution"] = v.copy_to_solution;
    j["type"] = v.type;
    j["id"] = v.id;
    j["history"] = v.history;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource& v) {
    v.install_dir = j.at("install_dir").get<std::string>;
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.hostname = j.at("hostname").get<std::string>;
    v.remote_path = j.at("remote_path").get<std::string>;
    v.use_tls = j.at("use_tls").get<bool>;
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>;
    v.copy_to_solution = j.at("copy_to_solution").get<bool>;
    v.type = j.at("type").get<PatcherComponentResourceType>;
    v.id = j.at("id").get<std::string>;
    v.history = j.at("history").get<PatcherComponentResourceHistory>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentResource_HPP
