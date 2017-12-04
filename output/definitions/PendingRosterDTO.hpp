#ifndef SWAGGER_TYPES_PendingRosterDTO_HPP
#define SWAGGER_TYPES_PendingRosterDTO_HPP
#include <json.hpp>
#include "PendingRosterInviteeDTO.hpp"
#include "FailedInvite.hpp"
#include "TicketOfferDTO.hpp"
#include "PendingRosterMemberDTO.hpp"
namespace leagueapi {
  // 
  struct PendingRosterDTO {
    // 
    uint64_t captainId;
    // 
    std::string invitationId;
    // 
    std::vector<FailedInvite> inviteFaileds;
    // 
    std::vector<PendingRosterInviteeDTO> invitees;
    // 
    int32_t logo;
    // 
    int32_t logoColor;
    // 
    std::vector<PendingRosterMemberDTO> members;
    // 
    std::string name;
    // 
    std::string shortName;
    // 
    std::vector<TicketOfferDTO> ticketOffers;
    // 
    int32_t tier;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const PendingRosterDTO& v) {
    j["captainId"] = v.captainId;
    j["invitationId"] = v.invitationId;
    j["inviteFaileds"] = v.inviteFaileds;
    j["invitees"] = v.invitees;
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["members"] = v.members;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["ticketOffers"] = v.ticketOffers;
    j["tier"] = v.tier;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, PendingRosterDTO& v) {
    v.captainId = j.at("captainId").get<uint64_t>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>;
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>;
    v.logo = j.at("logo").get<int32_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>;
    v.name = j.at("name").get<std::string>;
    v.shortName = j.at("shortName").get<std::string>;
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>;
    v.tier = j.at("tier").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_PendingRosterDTO_HPP
